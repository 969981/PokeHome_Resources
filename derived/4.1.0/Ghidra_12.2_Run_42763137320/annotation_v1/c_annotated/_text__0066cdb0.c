/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0056CDB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066cdb0; name: FUN_.text__0066cdb0
 */


undefined8 FUN__text__0066cdb0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0xa30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__0066cdfc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(int *)(param_1 + 0xa28) == 2) { // [自动静态注释] 条件判断/分支
      if (param_2 < lVar2) goto LAB__text__0066cdfc; // [自动静态注释] 条件判断/分支
      uVar1 = 0x71635c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (lVar2 < param_2) goto LAB__text__0066cdfc; // [自动静态注释] 条件判断/分支
      uVar1 = 0x71c765; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00666f74(param_1,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(param_1 + 0x16d8) = *(byte *)(param_1 + 0x16d8) | 1;
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


