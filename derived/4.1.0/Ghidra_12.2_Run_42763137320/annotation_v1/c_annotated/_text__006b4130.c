/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B4130
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b4130; name: FUN_.text__006b4130
 */


void FUN__text__006b4130(long *param_1,undefined8 param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((*(byte *)(param_1 + 0xb) ^ 0xff) & 0x81) != 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (((*(byte *)((long)param_1 + 0x5c) >> 4 & 1) != 0) && (*(char *)((long)param_1 + 0x5a) != '\0') // [自动静态注释] 条件判断/分支
     ) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((*(byte *)((long)param_1 + 0x62) >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
      lVar1 = param_1[0x15] + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = *(uint *)(param_1[0x15] + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006b69f4(*(undefined8 *) // [自动静态注释] 调用尚未恢复正式名称的函数
                           (lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar2 + 4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                             (ulong)*(byte *)(lVar1 + (ulong)(*(int  // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                                  *)(lVar1 + (ulong)uVar2 + 4) + uVar2) + 0xc) * 4)
                                           + uVar2) + 8),param_2,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar3 = *(byte *)(param_1 + 0xb); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x006b4190; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*param_1 + 0xe0))(param_1,param_2,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  bVar3 = *(byte *)(param_1 + 0xb); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x006b4190: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (((bVar3 >> 1 & 1) == 0) || (*(char *)((long)param_1 + 0x5a) != '\0')) { // [自动静态注释] 条件判断/分支
    for (plVar4 = (long *)param_1[5]; plVar4 != param_1 + 4; plVar4 = (long *)plVar4[1]) { // [自动静态注释] 循环/迭代
      (**(code **)(plVar4[-1] + 0xd8))(plVar4 + -1,param_2,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


