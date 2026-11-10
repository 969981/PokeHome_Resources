/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C4750
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c4750; name: FUN_.text__004c4750
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c4750(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar7 = _DAT_008a43d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x58) != 0) { // [自动静态注释] 条件判断/分支
    puVar9 = *(undefined4 **)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar3 = (long *)*puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar8 = puVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar3 + 0x50))(plVar3,*puVar9,*(undefined1 *)(param_1 + 0x70)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar9 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar8 != (undefined4 *) // [自动静态注释] 循环/迭代
                       (*(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x58) * 4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(param_1 + 0x68) != 0) { // [自动静态注释] 条件判断/分支
    puVar9 = *(undefined4 **)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      plVar3 = (long *)*puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar8 = puVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar3 + 0x50))(plVar3,*puVar9,*(undefined1 *)(param_1 + 0x71)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar9 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar8 != (undefined4 *) // [自动静态注释] 循环/迭代
                       (*(long *)(param_1 + 0x60) + (ulong)*(uint *)(param_1 + 0x68) * 4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  puVar7 = _DAT_008a45f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 0x48) != 0) { // [自动静态注释] 条件判断/分支
    puVar5 = *(undefined8 **)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar6 = puVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__00434930(*puVar7,*puVar5,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar5 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar6 != (undefined8 *) // [自动静态注释] 循环/迭代
                       (*(long *)(param_1 + 0x40) + (ulong)*(uint *)(param_1 + 0x48) * 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  puVar7 = *(undefined8 **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar7 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    iVar1 = *(int *)(puVar7 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = iVar1 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(puVar7 + 0xc) = iVar2;
    if (((iVar2 == 0) || // [自动静态注释] 条件判断/分支
        (((iVar2 == 1 && (iVar1 != 0 || *(char *)((long)puVar7 + 100) == '\0')) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         (*(char *)((long)puVar7 + 100) != '\0')))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       (FUN__text__004473f0(puVar7), *(int *)(puVar7 + 0xc) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)*puVar7)(puVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00400fc0(4,puVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar4 = *(long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x004c487c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = *(long *)(param_1 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x004c487c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x60) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x40) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00400fc0(0x10,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


