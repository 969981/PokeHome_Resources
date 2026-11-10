/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00448F1C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00548f1c; name: FUN_.text__00548f1c
 */


void FUN__text__00548f1c(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(lVar3 + 0x1d) != '\0') { // [自动静态注释] 条件判断/分支
    iVar2 = FUN__text__005493c0(param_1 + 8,*(undefined8 *)(param_1 + 0x58),lVar3 + 8, // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined4 *)(param_2 + 8));
    if (iVar2 != 1) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00549570(param_1 + 8); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(*(long *)(param_1 + 0x50) + 0x1d) = 0;
    lVar3 = *(long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(lVar3 + 0x15) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__00549674(*(undefined4 *)(lVar3 + 8),param_1 + 8,*(undefined1 *)(lVar3 + 0x14)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(*(long *)(param_1 + 0x50) + 0x15) = 0;
    lVar3 = *(long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = lVar3 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00549700(param_1 + 8,param_2,lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


