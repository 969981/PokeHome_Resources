/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0056C54C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c54c; name: FUN_.text__0066c54c
 */


byte * FUN__text__0066c54c(byte *param_1,char *param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint __c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 == (byte *)0x0) { // [自动静态注释] 条件判断/分支
    param_1 = (byte *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  __c = (uint)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      pbVar2 = param_1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pcVar1 = strchr(param_2,__c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar1 == (char *)0x0) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          pbVar3 = pbVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *param_3 = (long)pbVar3;
          if (*pbVar3 == 0) { // [自动静态注释] 条件判断/分支
            return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          pcVar1 = strchr(param_2,(uint)*pbVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          pbVar2 = pbVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (pcVar1 == (char *)0x0); // [自动静态注释] 循环/迭代
        *pbVar3 = 0;
        *param_3 = *param_3 + 1;
        return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      __c = (uint)*pbVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1 = pbVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (__c != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return (byte *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


