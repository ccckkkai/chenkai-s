import numpy as np
import matplotlib.pyplot as plt

# ���岽����
def stp(z):
    return np.where(z > 0, 1, 0)

# ���庯��
def f(omega, i, p):
    return 1 - np.power(omega - stp(-i), 2 * p)

# �������뷶Χ
num_points = 100
omega_values = np.linspace(-1, 1, num_points)

# ����10����ͬ��pֵ
p_values = list(range(1, 11))

plt.figure(figsize=(10, 6))

# ����ÿ��pֵ�����㲢���ƹ��ε�����
for p in p_values:
    func_values = f(omega_values, 1, p)
    normalized_func_values = (func_values - np.min(func_values)) / (np.max(func_values) - np.min(func_values))
    # ��Ӷ��ζ���ʽ��ʹ���߸�����
    normalized_func_values = normalized_func_values ** 2
    plt.plot(omega_values, normalized_func_values, label=f'p = {p}')

plt.xlabel('x')
plt.ylabel(' f(w(t), i(t))')
plt.title('Arched Plot for Different p Values')
plt.ylim(0, 1)  # ���������귶ΧΪ (0, 1)
plt.legend()
plt.grid(True)
plt.show()




