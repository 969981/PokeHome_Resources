/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002BF148
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003bf148; name: FUN_.text__003bf148
 */


void FUN__text__003bf148(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x88) == -0x340d631b7bddd9bb || *(long *)(param_1 + 0x88) == 0) { // [自动静态注释] 条件判断/分支
    lVar2 = *(long *)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x68))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(param_1 + 0x84) = bVar1 & 1;
    lVar2 = *(long *)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = (long *)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*plVar3 == -0x340d631b7bddd9bb) || (*plVar3 == 0)) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Could not recover jumptable at 0x003bf224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x98) + 0xa0))(*(long **)(param_1 + 0x98),plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


