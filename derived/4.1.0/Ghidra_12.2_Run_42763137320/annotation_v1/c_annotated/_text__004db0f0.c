/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003DB0F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004db0f0; name: FUN_.text__004db0f0
 */


void FUN__text__004db0f0(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(short *)(param_1 + 0xca) == 0) { // [自动静态注释] 条件判断/分支
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      lVar1 = lVar2 + -0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (*(short *)(lVar1 + 0x160) == 0) { // [自动静态注释] 条件判断/分支
      *(undefined1 *)(param_1 + 0xcc) = 0;
      if (*(int *)((long)param_2 + 0x2c) == 0x11) { // [自动静态注释] 条件判断/分支
        *(undefined1 *)(param_1 + 200) = 1;
      } // [自动静态注释] 作用域/控制流边界
      if (*param_2 == 0) { // [自动静态注释] 条件判断/分支
        lVar1 = FUN__text__00400f90(5,(ulong)*(ushort *)(param_2 + 2) * // [自动静态注释] 调用尚未恢复正式名称的函数
                                      (ulong)*(byte *)(param_2 + 1) * 4,0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(long *)(param_1 + 0xd8) = lVar1;
        if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)((long)param_2 + 0x2c) = 2;
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        *param_2 = lVar1;
        *(undefined2 *)((long)param_2 + 0x12) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)((long)param_2 + 0x2c);
      (**(code **)(**(long **)(param_1 + 0xd0) + 0x40))(*(long **)(param_1 + 0xd0),param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)((long)param_2 + 0x2c) = *(undefined4 *)((long)param_2 + 0xc);
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_1 + 0xcc) == '\0') { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0xcc) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


