/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00372950
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472950; name: FUN_.text__00472950
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00472950(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pcVar2 = _DAT_008a4d20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = *(long *)(_DAT_008a4d08 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*_DAT_008a4d20 == '\0' || *_DAT_008a4d28 != '\0') { // [自动静态注释] 条件判断/分支
    for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x240)) { // [自动静态注释] 循环/迭代
      *(ushort *)(lVar5 + 0x220) = *(ushort *)(lVar5 + 0x220) & 0xfeff;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x240)) { // [自动静态注释] 循环/迭代
      FUN__text__00474280(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(ushort *)(lVar5 + 0x220) = *(ushort *)(lVar5 + 0x220) & 0xfeff;
    } // [自动静态注释] 作用域/控制流边界
    *pcVar2 = '\0';
  } // [自动静态注释] 作用域/控制流边界
  puVar1 = _DAT_008a4d10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (ulong)*(uint *)(_DAT_008a4d10 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(_DAT_008a4d10 + 1) != 0) { // [自动静态注释] 条件判断/分支
    plVar4 = (long *)*_DAT_008a4d10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar6 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*plVar6 != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__00463a10(); // [自动静态注释] 调用尚未恢复正式名称的函数
        plVar4 = (long *)*puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = (ulong)*(uint *)(puVar1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      plVar6 = plVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar6 != plVar4 + uVar3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


