# 🌤️ WeatherQt

一个基于 Qt 开发的桌面天气应用，支持实时天气查询、多日预报展示以及温度曲线可视化。

---

## 📌 项目简介

WeatherQt 是一个使用 Qt（C++）开发的桌面天气应用，通过调用天气 API 获取实时天气数据，并进行可视化展示。

---

## ✨ 功能特性

* 🌍 城市天气查询
* 📅 多日天气预报
* 🌡️ 温度变化曲线（QPainter 绘制）
* 💨 空气质量 AQI 显示
* 🕒 实时数据更新时间显示
* 🔍 支持城市搜索

---

## 🖼️ 界面预览

> 请在此处添加项目截图

```text
./images/main.png
```

或：

![主界面](./images/main.png)

---

## 🛠️ 技术栈

* C++
* Qt Widgets
* QJson（JSON解析）
* QPainter（图表绘制）
* 网络API（天气数据接口）

---

## 📂 项目结构

```
WeatherQt/
├── main.cpp
├── weather.h / weather.cpp
├── weatherdata.h
├── ui_weather.h
├── images/
├── resources/
└── README.md
```

---

## ⚙️ 运行环境

* Qt 5.12+
* C++11 及以上
* Windows / Linux

---

## 🚀 编译运行

### Qt Creator 方式

1. 打开 Qt Creator
2. 打开 `.pro` 工程文件
3. 构建并运行项目

---

### 命令行方式

```bash
qmake
make
./WeatherQt
```

---

## 🔑 API 配置

本项目依赖天气 API，请自行申请 Key。

在代码中配置：

```cpp
QString apiKey = "你的API_KEY";
```

---

## ⚠️ 已知问题

* 部分系统输入法可能异常（需设置 `QT_IM_MODULE`）
* 网络异常时数据获取失败
* UI 适配仍有优化空间

---

## 🔧 后续优化

* [ ] UI 美化（QSS）
* [ ] 城市自动补全
* [ ] 数据缓存机制
* [ ] 使用 QNetworkAccessManager 替代外部调用
* [ ] 深色模式支持

---

## 🤝 贡献

欢迎提交 Issue 或 Pull Request，一起完善项目。

---

## 📄 License

MIT License（或自行修改）

---

## 👨‍💻 作者

KD
