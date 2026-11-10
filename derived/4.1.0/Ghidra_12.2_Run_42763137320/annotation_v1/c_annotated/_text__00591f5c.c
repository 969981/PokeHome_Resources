/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00491F5C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00591f5c; name: FUN_.text__00591f5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00591f5c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__004e4e04(&DAT_00aeaf68,*(undefined4 *)(param_1 + 0x58), // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x70),
                              param_1 + 0x60,(long *)(param_1 + 0x68)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((int)uVar1 == 1) { // [自动静态注释] 条件判断/分支
    lVar2 = FUN__text__00400f80(5,*(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x5c) * 2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(param_1 + 0xa8) = lVar2;
    if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
      if (*(long *)(param_1 + 0x68) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__004e506c(_DAT_008a4fc0,*(undefined4 *)(param_1 + 0x60)); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined8 *)(param_1 + 0x68) = 0;
        if (*(long *)(param_1 + 0xa8) != 0) { // [自动静态注释] 条件判断/分支
          FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined8 *)(param_1 + 0xa8) = 0;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(param_1 + 0x90) = 1;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x58) / 400;
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


