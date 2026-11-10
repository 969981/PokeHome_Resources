/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00580424
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680424; name: FUN_.text__00680424
 */


undefined8 FUN__text__00680424(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar1 = FUN__text__00685e10(param_1,(int)param_2[1],*(undefined4 *)((long)param_2 + 0xc)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__0067ad9c(*param_2,*(undefined4 *)(param_1 + 0xb8),3); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (((*(byte *)(*param_2 + 0x99c) & 1) == 0) && (*(char *)(param_1 + 0xe7) == '\0')) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__00679b44(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xc0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (((int)uVar2 != 0) && // [自动静态注释] 条件判断/分支
       (uVar2 = FUN__text__0067f9fc(*param_2,0,*(undefined4 *)(param_1 + 0xb8), // [自动静态注释] 调用尚未恢复正式名称的函数
                                    *(undefined4 *)(param_1 + 0xc0)), (int)uVar2 == 0)) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


