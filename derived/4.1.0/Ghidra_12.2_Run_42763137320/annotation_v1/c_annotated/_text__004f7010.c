/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F7010
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f7010; name: FUN_.text__004f7010
 */


void FUN__text__004f7010(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    if (*(uint *)(param_1 + 1) != 0) { // [自动静态注释] 条件判断/分支
      lVar2 = (ulong)*(uint *)(param_1 + 1) * 0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (plVar1[10] != 0) { // [自动静态注释] 条件判断/分支
          FUN__text__00400fc0(2); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        if (*plVar1 != 0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(plVar1 + 1) = 0;
          FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
          *plVar1 = 0;
          *(undefined4 *)((long)plVar1 + 0xc) = 0;
        } // [自动静态注释] 作用域/控制流边界
        if (plVar1[2] != 0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(plVar1 + 3) = 0;
          FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
          plVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)((long)plVar1 + 0x1c) = 0;
        } // [自动静态注释] 作用域/控制流边界
        plVar1 = plVar1 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar2 = lVar2 + -0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar2 != 0); // [自动静态注释] 循环/迭代
      plVar1 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0,plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


