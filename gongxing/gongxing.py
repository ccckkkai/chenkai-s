import numpy as np
import matplotlib.pyplot as plt

# 定义步函数
def stp(z):
    return np.where(z > 0, 1, 0)

# 定义函数
def f(omega, i, p):
    return 1 - np.power(omega - stp(-i), 2 * p)

# 生成输入范围
num_points = 100
omega_values = np.linspace(-1, 1, num_points)

# 生成10个不同的p值
p_values = list(range(1, 11))

plt.figure(figsize=(10, 6))

# 对于每个p值，计算并绘制拱形的曲线
for p in p_values:
    func_values = f(omega_values, 1, p)
    normalized_func_values = (func_values - np.min(func_values)) / (np.max(func_values) - np.min(func_values))
    # 添加二次多项式，使曲线更拱形
    normalized_func_values = normalized_func_values ** 2
    plt.plot(omega_values, normalized_func_values, label=f'p = {p}')

plt.xlabel('x')
plt.ylabel(' f(w(t), i(t))')
plt.title('Arched Plot for Different p Values')
plt.ylim(0, 1)  # 设置纵坐标范围为 (0, 1)
plt.legend()
plt.grid(True)
plt.show()




