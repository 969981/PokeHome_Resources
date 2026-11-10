/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003FD7D8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fd7d8; name: FUN_.text__004fd7d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004fd7d8(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_1 = _DAT_008a50c0 + 0x10;
  if ((param_1[8] != 0) && (lVar1 = *(long *)(param_1[8] + 0x78), lVar1 != 0)) { // [自动静态注释] 条件判断/分支
    if ((*(long *)(lVar1 + 0x178) == 0) || (*(long *)(lVar1 + 0x170) == 0)) { // [自动静态注释] 条件判断/分支
      uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = 0x800000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar2 = (ulong)*(uint *)(*(long *)(lVar1 + 0x170) + (ulong)*(uint *)((long)param_1 + 0xc) * 4) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + 0x178) + (ulong)*(uint *)((long)param_1 + 0xc)) << // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              0x20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00434930(DAT_00ae9a70,uVar2 | uVar3,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  operator_delete(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


