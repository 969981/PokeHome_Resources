/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A8AC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a8ac0; name: FUN_.text__006a8ac0
 */


void FUN__text__006a8ac0(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__006a30c8(param_1,0x714c32); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__006a8cbc(param_1,param_2,0x714c32,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined4 *)(param_1 + 0x80) = 0;
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = FUN__text__006a30c8(param_1,0x70dfee); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__006a8cbc(param_1,param_2,0x70dfee,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x70) = uVar2;
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = FUN__text__006a30c8(param_1,0x7214c8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__006a8cbc(param_1,param_2,0x7214c8,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x78) = uVar2;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


