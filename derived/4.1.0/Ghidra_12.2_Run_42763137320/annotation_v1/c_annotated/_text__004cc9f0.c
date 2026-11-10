/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003CC9F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cc9f0; name: FUN_.text__004cc9f0
 */


bool FUN__text__004cc9f0(int *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((iVar1 == 1) && (uVar2 = *(ushort *)(*(long *)(param_1 + 2) + 6), (ulong)uVar2 != 0)) { // [自动静态注释] 条件判断/分支
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__004cca70(param_2,*(undefined4 *)(*(long *)(param_1 + 2) + lVar3), // [自动静态注释] 调用尚未恢复正式名称的函数
                          (undefined4 *)(*(long *)(param_1 + 2) + lVar3) + 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar3 = lVar3 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((ulong)uVar2 * 0xc != lVar3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return iVar1 == 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


