/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E661C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e661c; name: FUN_.text__005e661c
 */


void FUN__text__005e661c(undefined1 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = 0;
  uVar1 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = uVar1 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) || // [自动静态注释] 条件判断/分支
     (lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar3 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__005f52b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0x38] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (uVar1 != 0) goto LAB__text__005e6698; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    param_1[0x38] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(param_1 + 0x20) = lVar3;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
LAB__text__005e6698: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(uVar1 + 0x98) != 0) { // [自动静态注释] 条件判断/分支
      lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar3 != 0) goto LAB__text__005e66b0; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = FUN__text__005f52b0(); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__005e66b0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(long *)(param_1 + 0x58) = lVar3;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  nn::os::InitializeLightEvent(param_1 + 0x70,0,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  param_1[0x72] = 0x4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x73] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x78] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


