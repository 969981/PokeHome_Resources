/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00372FC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472fc0; name: FUN_.text__00472fc0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00472fc0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (DAT_00aea810 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar2 = DAT_00aea810; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while (puVar3 = puVar2, puVar2 = (undefined8 *)*puVar3, puVar3[1] != param_1) { // [自动静态注释] 循环/迭代
        puVar4 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar2 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      puVar1 = &DAT_00aea810; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (DAT_00aea810 != puVar3) { // [自动静态注释] 条件判断/分支
        puVar1 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *puVar1 = puVar2;
      if (DAT_00aea818 == puVar3) { // [自动静态注释] 条件判断/分支
        DAT_00aea818 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (DAT_00aea828 <= puVar3 && puVar3 < DAT_00aea828 + (ulong)DAT_00aea830 * 3) // [自动静态注释] 条件判断/分支
        goto LAB__text__00473088; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__0047304c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00400fc0(5); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (puVar3 < DAT_00aea828 || DAT_00aea828 + (ulong)DAT_00aea830 * 3 <= puVar3) // [自动静态注释] 条件判断/分支
        goto LAB__text__0047304c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__00473088: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *puVar3 = DAT_00aea820;
        DAT_00aea820 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      DAT_00aea834 = DAT_00aea834 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar2 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


