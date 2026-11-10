/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004FFBE4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ffbe4; name: FUN_.text__005ffbe4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ffbe4(long param_1,byte *param_2,uint param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = (param_4 & 0xff) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 < 7) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x005ffc0c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__005ffc18 + (ulong)*(byte *)((ulong)uVar2 + 0x75901c) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *param_2 = 0;
  if ((int)param_3 < 0x402) { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined8 *)(_DAT_008a63e8 + (ulong)param_3 * 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar3[1] != lVar4) { // [自动静态注释] 条件判断/分支
      bVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (*(long *)(lVar4 + uVar5 * 8) != 0) { // [自动静态注释] 条件判断/分支
          *(short *)(param_1 + (ulong)bVar6 * 2) = (short)uVar5;
          bVar6 = *param_2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *param_2 = bVar6;
          plVar3 = (long *)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar4 = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar5 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar5 < (ulong)(plVar3[1] - lVar4 >> 3)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


