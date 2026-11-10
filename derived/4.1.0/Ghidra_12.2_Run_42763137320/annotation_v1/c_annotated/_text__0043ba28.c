/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0033BA28
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043ba28; name: FUN_.text__0043ba28
 */


undefined2 * FUN__text__0043ba28(long param_1,int *param_2,char *param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar3 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((((iVar3 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) && // [自动静态注释] 条件判断/分支
     (((char)param_2[6] == -1 && (*(long *)(param_2 + 8) == 0)))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(char *)(param_1 + 10) == '\0') { // [自动静态注释] 条件判断/分支
      *(undefined2 *)(param_1 + 8) = 0;
    } // [自动静态注释] 作用域/控制流边界
    *param_3 = *(char *)(param_1 + 10);
    *(undefined1 *)(param_1 + 10) = 1;
    return (undefined2 *)(param_1 + 8); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((param_4 != (long *)0x0) && (*(char *)(param_1 + 10) != '\0')) { // [自动静态注释] 条件判断/分支
    *param_4 = param_1 + 8;
    iVar3 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = FUN__text__0043bc90(param_1 + 0x10,iVar3,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    iVar3 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((((iVar3 == 0) && ((char)param_2[4] == -1)) && ((char)param_2[6] == -1)) && // [自动静态注释] 条件判断/分支
       (*(long *)(param_2 + 8) == 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(char *)(lVar1 + 6) == '\0') { // [自动静态注释] 条件判断/分支
        *(undefined2 *)(lVar1 + 4) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *param_3 = *(char *)(lVar1 + 6);
      *(undefined1 *)(lVar1 + 6) = 1;
      return (undefined2 *)(lVar1 + 4); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((param_4 != (long *)0x0) && (*(char *)(lVar1 + 6) != '\0')) { // [自动静态注释] 条件判断/分支
      *param_4 = lVar1 + 4;
      iVar3 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar1 = FUN__text__0043bfb0(lVar1 + 8,iVar3,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
      puVar2 = (undefined2 *)FUN__text__0043c1b8(lVar1,param_2 + 4,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
      return puVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return (undefined2 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


