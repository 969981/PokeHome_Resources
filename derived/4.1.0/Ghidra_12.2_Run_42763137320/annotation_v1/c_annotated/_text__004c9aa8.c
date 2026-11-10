/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C9AA8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c9aa8; name: FUN_.text__004c9aa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c9aa8(long *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0048e190(*_DAT_008a45d8,*(undefined4 *)(param_2 + 0x2c)); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*param_1 + 0x130))(param_1,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00464fec(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar3 = *(undefined8 **)(param_2 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = *(int *)(puVar3 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = iVar1 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(puVar3 + 0xc) = iVar2;
  if (((iVar2 == 0) || // [自动静态注释] 条件判断/分支
      ((iVar2 == 1 && (iVar1 != 0 || *(char *)((long)puVar3 + 100) == '\0')) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       *(char *)((long)puVar3 + 100) != '\0')) &&
     (FUN__text__004473f0(puVar3), *(int *)(puVar3 + 0xc) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)*puVar3)(puVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00400fc0(4,puVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


