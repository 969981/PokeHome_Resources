/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005CACF8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cacf8; name: FUN_.text__006cacf8
 */


void FUN__text__006cacf8(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = *(long **)(lVar1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 != (long *)(lVar1 + 0x18)) { // [自动静态注释] 条件判断/分支
    plVar2 = (long *)plVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(*plVar3 + 8) = plVar2;
    *plVar2 = *plVar3;
    *(long **)(lVar4 + 8) = plVar3;
    *plVar3 = lVar4;
    plVar3[3] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[4] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(plVar3 + 2) = 7;
    *(undefined4 *)(plVar3 + 6) = 1;
    plVar2 = (long *)(lVar1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar3 = *plVar2;
    *(long **)(lVar4 + 8) = plVar2;
    *(long **)(*plVar2 + 8) = plVar3;
    *plVar2 = lVar4;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


