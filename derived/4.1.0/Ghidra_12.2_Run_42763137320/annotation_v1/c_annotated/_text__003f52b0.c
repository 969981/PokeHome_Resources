/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F52B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f52b0; name: FUN_.text__003f52b0
 */


ulong FUN__text__003f52b0(undefined8 param_1,byte *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = 0xcbf29ce484222325; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  sVar1 = strlen((char *)param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (sVar1 != 0) { // [自动静态注释] 条件判断/分支
    pbVar2 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sVar3 = sVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*pbVar2 - 0x41 < 0x1a) { // [自动静态注释] 条件判断/分支
        *pbVar2 = *pbVar2 + 0x20;
      } // [自动静态注释] 作用域/控制流边界
      sVar3 = sVar3 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pbVar2 = pbVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (sVar3 != 0); // [自动静态注释] 循环/迭代
    if ((sVar1 & 0xffffffff) != 0) { // [自动静态注释] 条件判断/分支
      pbVar2 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        pbVar5 = pbVar2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = uVar4 * 0x100000001b3 ^ (ulong)*pbVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pbVar2 = pbVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (pbVar5 < param_2 + (sVar1 & 0xffffffff)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


