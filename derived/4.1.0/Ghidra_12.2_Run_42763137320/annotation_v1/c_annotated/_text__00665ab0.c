/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00565AB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00665ab0; name: FUN_.text__00665ab0
 */


undefined8 FUN__text__00665ab0(undefined8 *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined2 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_2 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00656c1c(param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (param_1 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    FUN__text__00656b14(param_2,&LAB__text__00665ba0); // [自动静态注释] 调用尚未恢复正式名称的函数
    pcVar2 = (char *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (pcVar2 != (char *)0x0) { // [自动静态注释] 循环/迭代
      sVar3 = strlen(pcVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = FUN__text__006783d4(sVar3 + 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
        FUN__text__00656c1c(param_2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
        return 3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      pcVar2 = strcpy((char *)(lVar4 + 0x1a),(char *)*param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pcVar2 = strchr(pcVar2,0x3a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar2 == (char *)0x0) { // [自动静态注释] 条件判断/分支
        uVar1 = 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *pcVar2 = '\0';
        lVar5 = strtol(pcVar2 + 1,(char **)0x0,10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar1 = (undefined2)lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined2 *)(lVar4 + 0x18) = uVar1;
      FUN__text__00656b20(param_2,*(undefined8 *)(param_2 + 8),lVar4,lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      pcVar2 = (char *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1 = param_1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


