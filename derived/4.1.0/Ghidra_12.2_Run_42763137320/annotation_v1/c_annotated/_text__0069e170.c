/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0059E170
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069e170; name: FUN_.text__0069e170
 */


long * FUN__text__0069e170(long *param_1,char *param_2,long param_3,byte param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = (long *)FUN__text__006a0f04(0xa0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__0069dfc8(plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar5 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (cVar1 != '\0') { // [自动静态注释] 循环/迭代
      *(char *)(plVar5 + 2) = cVar1;
      if (((int)lVar3 == 0x7e) || (param_2[lVar3 + 1] == '\0')) { // [自动静态注释] 条件判断/分支
        lVar3 = lVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar5 = (long *)((long)plVar5 + 0x11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__0069e200; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(char *)((long)plVar5 + 0x11) = param_2[lVar3 + 1];
      lVar3 = lVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5 = (long *)((long)plVar2 + lVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar1 = param_2[lVar3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    plVar5 = plVar5 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0069e200: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)plVar5 = 0;
    pcVar4 = param_2 + lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      cVar1 = *pcVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pcVar4 = pcVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (cVar1 != '\0'); // [自动静态注释] 循环/迭代
    plVar2[0x12] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(byte *)(plVar2 + 0x13) = param_4 & 1;
    lVar3 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar2 = *param_1;
    *(long **)(lVar3 + 8) = param_1;
    *(long **)(*param_1 + 8) = plVar2;
    *param_1 = lVar3;
  } // [自动静态注释] 作用域/控制流边界
  return plVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


