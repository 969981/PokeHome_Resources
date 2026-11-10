/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004A0068
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a0068; name: FUN_.text__005a0068
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a0068(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar2 = _DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_1 + 0x80) != 0) { // [自动静态注释] 条件判断/分支
    iVar1 = *_DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(param_1 + 0x104) != iVar1) { // [自动静态注释] 条件判断/分支
      *(undefined1 *)(param_1 + 0x109) = 0;
      FUN__text__005a0558(*(long *)(param_1 + 0x58) + (long)iVar1 * 0x168); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar4 = *(long *)(param_1 + 0x58) + (long)*piVar2 * 0x168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006ec8e0(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(param_1 + 0x80))(param_1 + 0xa0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(int *)(lVar4 + 0x160) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__006eddd4(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined4 *)(lVar4 + 0x160) = 0;
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__006ec93c(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      pcVar3 = *(code **)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(long *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        (*pcVar3)(param_1 + 0xa0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 *)(param_1 + 0x109) = 1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


