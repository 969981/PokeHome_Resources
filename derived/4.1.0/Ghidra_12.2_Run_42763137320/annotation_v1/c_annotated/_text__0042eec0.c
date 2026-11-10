/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0032EEC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042eec0; name: FUN_.text__0042eec0
 */


void FUN__text__0042eec0(undefined4 param_1,long param_2,ulong param_3,ulong param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar3 = *(ushort **)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar3 != (ushort *)0x0) { // [自动静态注释] 条件判断/分支
    uVar1 = *puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = (uint)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar1 < 2) { // [自动静态注释] 条件判断/分支
      uVar5 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = (ulong)uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = (long *)((long)puVar3 + ((ulong)((uint)uVar1 * 2 + 9) & 0x3fff8) + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar3 = puVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uint)*puVar3 == ((uint)param_3 & 0xffff)) { // [自动静态注释] 条件判断/分支
        uVar7 = (undefined4)plVar2[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(plVar2 + -1) = param_1;
        if (((param_4 & 1) == 0) || (*plVar2 == 0)) { // [自动静态注释] 条件判断/分支
          iVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          iVar6 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *plVar2 = 0;
        } // [自动静态注释] 作用域/控制流边界
        goto LAB__text__0042ef58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      plVar2 = plVar2 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = uVar4 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar4 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  iVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((uint)param_3 >> 0x10 & 0xff) != 3) { // [自动静态注释] 条件判断/分支
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0042ef58: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar2 = *(long **)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((char)plVar2[1] != '\0') { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar2 + 0x48)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (uVar7,plVar2,param_3,param_3 >> 0x10,*(undefined4 *)(param_2 + 0x38),iVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (iVar6 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x0042ef94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


