/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009A250
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019a250; name: FUN_.text__0019a250
 */


undefined8 FUN__text__0019a250(long *param_1,char *param_2,int *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_3 = 0;
  lVar3 = *(long *)(*(long *)(*param_1 + 0x60) + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    iVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = lVar3 * 0x1c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar2 = (int *)(*(long *)(*(long *)(*param_1 + 0x60) + 0xf0) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (((((char)piVar2[-2] == *param_2) && (piVar2[-1] == *(int *)(param_2 + 4))) && // [自动静态注释] 条件判断/分支
          (*piVar2 == *(int *)(param_2 + 8))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         ((piVar2[1] == *(int *)(param_2 + 0xc) && (piVar2[2] == *(int *)(param_2 + 0x10))))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *param_3 = iVar1;
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      iVar1 = iVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      piVar2 = piVar2 + 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = lVar3 + -0x1c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar3 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


