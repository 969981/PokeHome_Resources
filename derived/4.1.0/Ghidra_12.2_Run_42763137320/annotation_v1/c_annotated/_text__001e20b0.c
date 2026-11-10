/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000E20B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e20b0; name: FUN_.text__001e20b0
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0x000001a4 : 0x001e2218 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 FUN__text__001e20b0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)(**(code **)*puVar6)(puVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)FUN__text__0012615c(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar3 != plVar2) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar2 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  local_50 = 0x6741161af454b321; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0x715c42; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = FUN__text__0018ebb0(puVar6[0xaf],&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((*(long *)(param_1 + 0x68) == 0) || // [自动静态注释] 条件判断/分支
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x001e2224: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar7 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar1 = iRam00000000000001a4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar2 = (long *)(**(code **)*puVar6)(puVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)FUN__text__0018d6a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar3 != plVar2) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        plVar2 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0); // [自动静态注释] 循环/迭代
      if (plVar2 == (long *)0x0) goto joined_r0x001e2224; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    puVar7 = puVar6 + -10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar1 = *(int *)((long)puVar6 + 0x154); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
    uVar5 = FUN__text__001d6c3c(uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar5 = FUN__text__001d6d0c(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if ((uVar5 & 1) == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (1 < *(uint *)((long)puVar7 + 0x1a4)) { // [自动静态注释] 条件判断/分支
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = (long *)(**(code **)*puVar6)(puVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)FUN__text__0018d6a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (plVar3 != plVar2) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        plVar2 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(puVar6 + 0x6a) = 2;
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


