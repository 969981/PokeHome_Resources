/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00404EC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00504ec0; name: FUN_.text__00504ec0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00504ec0(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = _DAT_008a40b0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(*_DAT_008a40b0 + 0xc4) = *(byte *)(*_DAT_008a40b0 + 0xc4) | 2;
  FUN__text__00506a10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = FUN__text__0050c2e0(*plVar1,*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = *(undefined4 *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(lVar2 + 0x120) = *(undefined4 *)((long)param_1 + 0xc);
    *(undefined4 *)(lVar2 + 0x11c) = uVar3;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


