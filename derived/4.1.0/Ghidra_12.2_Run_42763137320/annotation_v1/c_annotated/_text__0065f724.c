/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0055F724
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065f724; name: FUN_.text__0065f724
 */


ushort FUN__text__0065f724(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((*(byte *)(lVar3 + 0xf42) & 1) != 0) && (iVar1 = *(int *)(lVar3 + 0x180), 399 < iVar1)) { // [自动静态注释] 条件判断/分支
    if (iVar1 == 0x197) { // [自动静态注释] 条件判断/分支
      if ((*(byte *)((long)param_1 + 0x3fd) & 1) == 0) { // [自动静态注释] 条件判断/分支
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if ((iVar1 != 0x191) || (-1 < *(char *)((long)param_1 + 0x3fc))) { // [自动静态注释] 条件判断/分支
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = *(ushort *)(lVar3 + 0x15a4) >> 5 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


