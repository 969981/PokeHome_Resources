/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00358D30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458d30; name: FUN_.text__00458d30
 */


void FUN__text__00458d30(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar4 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      iVar1 = (int)plVar2[5] + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(plVar2 + 5) = iVar1;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        lVar3 = plVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)(lVar3 + 0xde) = 0;
        if (*(long *)(lVar3 + 0x70) != 0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(lVar3 + 0x78) = 0;
          FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined8 *)(lVar3 + 0x70) = 0;
          *(undefined4 *)(lVar3 + 0x7c) = 0;
        } // [自动静态注释] 作用域/控制流边界
        plVar4 = (long *)*plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar4 != (long *)0x0); // [自动静态注释] 循环/迭代
      plVar2 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar1 = (int)plVar2[5] + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(plVar2 + 5) = iVar1;
    } // [自动静态注释] 作用域/控制流边界
    if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
      thunk_FUN__text__00458490(plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00400fc0(0,plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *param_1 = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


