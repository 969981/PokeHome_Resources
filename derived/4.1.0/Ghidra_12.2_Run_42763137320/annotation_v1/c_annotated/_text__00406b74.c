/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00306B74
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00406b74; name: FUN_.text__00406b74
 */


void FUN__text__00406b74(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(param_1 + 0x548); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) goto LAB__text__00406bac; // [自动静态注释] 条件判断/分支
  if (*(long *)(lVar2 + 0x30) == 0) { // [自动静态注释] 条件判断/分支
    if (*(long *)(lVar2 + 0x68) == 0) { // [自动静态注释] 条件判断/分支
      if (*(long *)(lVar2 + 0x70) != 0) goto LAB__text__00406be0; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    else if (*(long *)(*(long *)(lVar2 + 0x68) + 0x80) == 0) { // [自动静态注释] 条件判断/分支
LAB__text__00406be0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar1 = FUN__text__0040a740(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((lVar1 != 0) && ((*(long *)(lVar1 + 0x548) == lVar2 || (*(long *)(lVar1 + 0x548) == 0)))) // [自动静态注释] 条件判断/分支
      { // [自动静态注释] 作用域/控制流边界
        *(undefined1 *)(lVar1 + 0x554) = 0;
        *(undefined8 *)(lVar1 + 0x548) = 0;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004d3fb0(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00400fc0(5,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x548) = 0;
LAB__text__00406bac: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined1 *)(param_1 + 0x554) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


