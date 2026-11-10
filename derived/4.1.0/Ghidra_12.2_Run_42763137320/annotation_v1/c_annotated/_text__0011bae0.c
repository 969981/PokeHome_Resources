/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0001BAE0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011bae0; name: FUN_.text__0011bae0
 */


void FUN__text__0011bae0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::oe::SetFocusHandlingMode(0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::oe::SetOperationModeChangedNotificationEnabled(true); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar2 = nn::oe::GetOperationMode(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 < 2) { // [自动静态注释] 条件判断/分支
    *(uint *)(param_1 + 0x230) = uVar2;
  } // [自动静态注释] 作用域/控制流边界
  pcVar3 = *(code **)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    (*pcVar3)(param_1 + 0x80); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(code **)(param_1 + 0x60) = FUN__text__0011be60;
  *(undefined **)(param_1 + 0x68) = &DAT__text__0011bee0;
  *(undefined **)(param_1 + 0x70) = &DAT__text__0011bee4;
  *(undefined **)(param_1 + 0x78) = &DAT__text__0011bee8;
  pcVar3 = *(code **)(param_1 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    (*pcVar3)(param_1 + 0x120); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(code **)(param_1 + 0x100) = FUN__text__0011beec;
  *(undefined **)(param_1 + 0x108) = &DAT__text__0011bf5c;
  *(undefined **)(param_1 + 0x110) = &DAT__text__0011bf60;
  *(undefined **)(param_1 + 0x118) = &DAT__text__0011bf64;
  pcVar3 = *(code **)(param_1 + 0x1a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    (*pcVar3)(param_1 + 0x1c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(code **)(param_1 + 0x1a0) = FUN__text__0011bf68;
  *(undefined **)(param_1 + 0x1a8) = &DAT__text__0011bf94;
  *(undefined1 **)(param_1 + 0x1b0) = &LAB__text__0011bf98;
  *(undefined1 **)(param_1 + 0x1b8) = &LAB__text__0011bfa4;
  *(long *)(param_1 + 0x1c0) = param_1;
  uVar1 = DAT_008e1898; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005df194(DAT_008e1898,0,param_1 + 0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005df194(uVar1,1,param_1 + 0xf0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005df194(uVar1,2,param_1 + 400); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


