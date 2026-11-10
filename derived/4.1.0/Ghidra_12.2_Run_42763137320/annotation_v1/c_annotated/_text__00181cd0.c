/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00081CD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00181cd0; name: FUN_.text__00181cd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__00181cd0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = *(long **)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar2 = (long *)FUN__text__0012559c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = FUN__text__0012559c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar1 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,0x2238,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = _DAT_0089fc00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *plVar1 = lVar5 + 0x10;
    plVar1[1] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar6 = (undefined8 *)((long)plVar1 + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = lVar5 + 0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(puVar6 + 2) = 0xb;
      *puVar6 = 0;
      puVar6[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(puVar6 + 5) = 0xb;
      *(undefined4 *)(puVar6 + 8) = 0xb;
      *(undefined4 *)(puVar6 + 0xb) = 0xb;
      *(undefined4 *)(puVar6 + 0xe) = 0xb;
      *(undefined4 *)(puVar6 + 0x11) = 0xb;
      *(undefined4 *)(puVar6 + 0x14) = 0xb;
      puVar6[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar6 + 0x15 != plVar1 + 0x446); // [自动静态注释] 循环/迭代
    *(undefined4 *)(plVar1 + 0x446) = 0;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    puVar6 = *(undefined8 **)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(param_1 + 0xb8) = plVar1;
    if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)*puVar6)(puVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(**(long **)(param_1 + 0xc0) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0xc0),puVar6,*(undefined8 *)(param_1 + 200), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0xd0));
      plVar1 = *(long **)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0xd0) = 8;
    *(long **)(param_1 + 0xc0) = plVar2;
    *(undefined8 *)(param_1 + 200) = 0x2238;
    if (*(long *)(param_1 + 0x5c8) != 0) { // [自动静态注释] 条件判断/分支
      *(long **)(*(long *)(param_1 + 0x5c8) + 0xb0) = plVar1;
      return *(long **)(param_1 + 0xb8); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return plVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


