/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004EC1E8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ec1e8; name: FUN_.text__005ec1e8
 */


void FUN__text__005ec1e8(long param_1,uint param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = param_3[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = param_3[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar11 = param_3[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = param_3[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = param_3[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = param_3[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = param_3[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = param_3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = param_3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar12 = *(long *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(lVar12 + (ulong)param_2 + 0x8c8) = 1;
  lVar12 = lVar12 + (ulong)param_2 * 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar12 + 0x918) = uVar8;
  *(undefined8 *)(lVar12 + 0x910) = uVar3;
  *(undefined8 *)(lVar12 + 0x920) = uVar1;
  *(undefined8 *)(lVar12 + 0x928) = uVar6;
  *(undefined8 *)(lVar12 + 0x930) = uVar11;
  *(undefined8 *)(lVar12 + 0x8f8) = uVar10;
  *(undefined8 *)(lVar12 + 0x8f0) = uVar5;
  *(undefined8 *)(lVar12 + 0x900) = uVar2;
  *(undefined8 *)(lVar12 + 0x908) = uVar7;
  *(undefined8 *)(lVar12 + 0x8e0) = uVar4;
  *(undefined8 *)(lVar12 + 0x8e8) = uVar9;
  *(undefined1 **)(lVar12 + 0x8e0) = &LAB__text__006d73e0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


