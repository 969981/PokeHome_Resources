/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005515E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006515e0; name: FUN_.text__006515e0
 */


long * FUN__text__006515e0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar6 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  auVar6 = FUN__text__0066c6a8(); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar3 = *(undefined8 **)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    plVar2 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar2 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar5 = (long *)*puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((plVar5[0x98] + plVar5[0x9c] == 0) && (*plVar5 == 0)) { // [自动静态注释] 条件判断/分支
        iVar1 = FUN__text__0066c6d8(auVar6._0_8_,auVar6._8_8_,plVar5[0x47],plVar5[0x48]); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (iVar1 <= iVar4) { // [自动静态注释] 条件判断/分支
          iVar1 = iVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar5 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        plVar2 = plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar4 = iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      puVar3 = (undefined8 *)puVar3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar3 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
    if (plVar2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      FUN__text__006512cc(param_2,plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(long *)(*(long *)(param_1 + 0x1100) + 0x30) =
           *(long *)(*(long *)(param_1 + 0x1100) + 0x30) + -1;
      *plVar2 = param_1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return plVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


