/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0039E270
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049e270; name: FUN_.text__0049e270
 */


void FUN__text__0049e270(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long **)(param_1 + 0x108) != (long *)0x0) { // [自动静态注释] 条件判断/分支
    iVar1 = (**(code **)(**(long **)(param_1 + 0x108) + 0x20))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(**(long **)(param_1 + 0x108) + 0x40))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(ushort *)(param_1 + 0x13d) = *(ushort *)(param_1 + 0x13d) & 0xfff7;
      if (*(int *)(param_1 + 0x118) != 0) { // [自动静态注释] 条件判断/分支
        lVar2 = *(long *)(param_1 + 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          (**(code **)(**(long **)(lVar2 + 8) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          lVar2 = lVar2 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (lVar2 != *(long *)(param_1 + 0x110) + (ulong)*(uint *)(param_1 + 0x118) * 0x10); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(param_1 + 0x118) = 0;
      if (*(long **)(param_1 + 0x120) != (long *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)(**(long **)(param_1 + 0x120) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(param_1 + 0x120) = 0;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(**(long **)(param_1 + 0x108) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x110) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x118) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


