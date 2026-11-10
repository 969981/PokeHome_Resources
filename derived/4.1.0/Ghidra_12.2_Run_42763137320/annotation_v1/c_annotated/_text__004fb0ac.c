/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003FB0AC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fb0ac; name: FUN_.text__004fb0ac
 */


long FUN__text__004fb0ac(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_2 != 0) && (lVar2 = FUN__text__004fccb0(param_1), lVar2 != 0)) { // [自动静态注释] 条件判断/分支
    return lVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__00400f80(0,0x90); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004fa324(lVar2,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
  lVar3 = *(long *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = FUN__text__004f5e5c(lVar2,*(undefined8 *)(lVar3 + 0x30),lVar3 + 0x18, // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined1 *)(lVar3 + 0x38));
  if ((iVar1 == 1) && (lVar3 = FUN__text__004f55c8(lVar2,0,0), lVar3 != 0)) { // [自动静态注释] 条件判断/分支
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
    *(undefined1 *)(lVar2 + 0x8c) = 1;
    lVar3 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__004ec13c(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004eb980(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return lVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


