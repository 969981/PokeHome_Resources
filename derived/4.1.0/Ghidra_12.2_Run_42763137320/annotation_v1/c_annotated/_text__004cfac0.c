/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003CFAC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cfac0; name: FUN_.text__004cfac0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004cfac0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_008a4648; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar2 = *(byte **)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pbVar2 != (byte *)0x0) { // [自动静态注释] 条件判断/分支
    uVar3 = (ulong)*pbVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*pbVar2 != 0) { // [自动静态注释] 条件判断/分支
      pbVar2 = pbVar2 + (uVar3 & 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        pbVar2 = pbVar2 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long *)pbVar2 != 0) { // [自动静态注释] 条件判断/分支
          FUN__text__0042f5a0(*puVar1,*(long *)pbVar2,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        uVar3 = uVar3 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar3 != 0); // [自动静态注释] 循环/迭代
      if (*(long *)(param_1 + 0x18) == 0) goto LAB__text__004cfb34; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
LAB__text__004cfb34: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(param_1 + 0x18) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


