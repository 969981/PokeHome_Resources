/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00564AC8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00664ac8; name: FUN_.text__00664ac8
 */


ulong FUN__text__00664ac8(undefined8 param_1,long param_2,undefined8 param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(int *)(param_2 + 0x10) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00664b10 */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)(&UNK__text__00664b20 + (ulong)*(byte *)((ulong)uVar2 + 0x7602b3) * 4))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_2 + 0x18) = param_3;
  *(int *)(param_2 + 0x20) = param_4;
  if (param_4 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar7 = (uint *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = param_2 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (6 < *puVar7 || (1 << (ulong)(*puVar7 & 0x1f) & 0x66U) == 0) { // [自动静态注释] 条件判断/分支
    uVar6 = 0x17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__006648bc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar5 = FUN__text__0066498c(param_1,lVar8,puVar7,uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = *(int *)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = FUN__text__006783d4(0x4000); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    uVar6 = 0x1b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto LAB__text__006648bc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_2 + 0x30) = lVar4;
  *(undefined4 *)(param_2 + 0x38) = 0x4000;
  uVar2 = FUN__text__00687280(lVar8,5); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(param_2 + 0x38) != 0x4000 && uVar2 < 2) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_2 + 0x10) = 5;
    uVar3 = (**(code **)(**(long **)(param_2 + 8) + 0x18)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (param_1,*(long **)(param_2 + 8),lVar4,0x4000 - *(int *)(param_2 + 0x38)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (uVar3 != 0) { // [自动静态注释] 条件判断/分支
      uVar5 = (ulong)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0066498c(param_1,lVar8,puVar7,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
      goto LAB__text__00664944; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (uVar2 + 5 < 7) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00664858 */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)((ulong)*(byte *)((ulong)(uVar2 + 5) + 0x7602ac) * 4 + 0x6647f8))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006646f8(param_1,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = FUN__text__0066498c(param_1,lVar8,puVar7,0x3d); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = uVar5 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00664944: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__006783e4(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((iVar1 != 0) && (*puVar7 == 1)) { // [自动静态注释] 条件判断/分支
    *puVar7 = 5;
  } // [自动静态注释] 作用域/控制流边界
  return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


