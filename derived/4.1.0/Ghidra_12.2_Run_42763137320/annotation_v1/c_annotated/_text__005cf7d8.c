/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004CF7D8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cf7d8; name: FUN_.text__005cf7d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cf7d8(long *param_1,long param_2,undefined4 param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = _DAT_0089f4a8 + 0x10;
  lVar1 = *(long *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[1] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(code **)(param_2 + 0x20) != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar1 = *(long *)(param_2 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[3] = *(long *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[5] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = *(long *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[4] = *(long *)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x16); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar1 = *(long *)(param_2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x13] = *(long *)(param_2 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x15] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = *(long *)(param_2 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x14] = *(long *)(param_2 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x12] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = _DAT_0089f4c8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x22] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x23) = param_3;
  *(undefined4 *)((long)param_1 + 0x11c) = param_4;
  *param_1 = lVar1 + 0x10;
  lVar1 = FUN__text__005cfd84(param_1[1],param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[0x22] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


