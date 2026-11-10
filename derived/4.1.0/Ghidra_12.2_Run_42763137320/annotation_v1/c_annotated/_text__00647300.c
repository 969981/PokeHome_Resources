/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00547300
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00647300; name: FUN_.text__00647300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00647300(long param_1,undefined1 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 8) != 0) { // [自动静态注释] 条件判断/分支
    if (*(char *)(param_1 + 0x18) != '\0') { // [自动静态注释] 条件判断/分支
      FUN__text__0063a140(*(undefined4 **)(param_1 + 0x10) + 2,0x140, // [自动静态注释] 调用尚未恢复正式名称的函数
                          **(undefined4 **)(param_1 + 0x10));
      if (*(long *)(param_1 + 8) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0063a140(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 *)(param_1 + 0x18) = 0;
      sVar2 = *(short *)(*(long *)(param_1 + 0x10) + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sVar3 = FUN__text__0063a010(*(long *)(param_1 + 0x10) + 8,0x140); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (sVar2 != sVar3) { // [自动静态注释] 条件判断/分支
        *(ushort *)(*(long *)(param_1 + 0x10) + 4) = *(ushort *)(*(long *)(param_1 + 0x10) + 4) | 4;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    puVar1 = *(undefined1 **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(ushort *)(*(long *)(param_1 + 0x10) + 4) & 4) != 0) { // [自动静态注释] 条件判断/分支
      puVar1 = _DAT_008a64b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *puVar1 = param_2;
    if (*(char *)(param_1 + 0x18) == '\0' && *(char *)(param_1 + 0x19) == '\0') { // [自动静态注释] 条件判断/分支
      if (*(long *)(param_1 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
        uVar4 = FUN__text__0063a010(*(long *)(param_1 + 0x10) + 8,0x140); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar4;
        FUN__text__0063a0c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140, // [自动静态注释] 调用尚未恢复正式名称的函数
                            **(undefined4 **)(param_1 + 0x10));
      } // [自动静态注释] 作用域/控制流边界
      if ((*(long *)(param_1 + 8) != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0)) // [自动静态注释] 条件判断/分支
      { // [自动静态注释] 作用域/控制流边界
        FUN__text__0063a0c0(*(long *)(param_1 + 8),0x10,**(undefined4 **)(param_1 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 *)(param_1 + 0x18) = 1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


