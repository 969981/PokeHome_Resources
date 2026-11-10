/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00271548
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00371548; name: FUN_.text__00371548
 */


bool FUN__text__00371548(long param_1,undefined4 param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x158)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(long *)(param_1 + 0x138) == 0) { // [自动静态注释] 条件判断/分支
    puVar1 = (undefined8 *)(param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = FUN__text__005dd608(puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar3 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__005daa98(DAT_008e1540,puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = DAT_008e1540; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x200) = *param_3;
    FUN__text__005da7f0(&local_a0,uVar4,param_1 + 0x1f0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *puVar1 = local_a0;
    *(undefined8 *)(param_1 + 0xb0) = uStack_98;
    *(undefined4 *)(param_1 + 0xb8) = local_90;
    *(undefined8 *)(param_1 + 0xc0) = local_88;
    *(undefined8 *)(param_1 + 200) = uStack_80;
    *(undefined8 *)(param_1 + 0xd0) = local_78;
    if (*(long *)(param_1 + 0xd8) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0xd8) = local_70;
    *(undefined8 *)(param_1 + 0xe0) = uStack_68;
    *(undefined8 *)(param_1 + 0xe8) = local_60;
    *(undefined8 *)(param_1 + 0xf0) = uStack_58;
    FUN__text__005dd648(puVar1,*(undefined8 *)(param_1 + 0x200)); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar3 = FUN__text__005dd608(puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar3 != 3) { // [自动静态注释] 条件判断/分支
      plVar6 = *(long **)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x10,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(uVar7 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = plVar6;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      FUN__text__0037a054(uVar4,*(undefined8 *)(param_1 + 0xa0),param_2,puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
      lVar5 = *(long *)(param_1 + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x138) = uVar4;
      if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
        bVar2 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (*(long *)(lVar5 + 8) != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(*(long *)(lVar5 + 8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(undefined8 *)(lVar5 + 8) = 0;
        } // [自动静态注释] 作用域/控制流边界
        (**(code **)(**(long **)(param_1 + 0x140) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(param_1 + 0x140),lVar5,*(undefined8 *)(param_1 + 0x148), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(param_1 + 0x150));
        bVar2 = *(long *)(param_1 + 0x138) != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(long **)(param_1 + 0x140) = plVar6;
      *(undefined8 *)(param_1 + 0x148) = 0x10;
      *(undefined8 *)(param_1 + 0x150) = 8;
      goto LAB__text__00371624; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  bVar2 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00371624: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x158)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return bVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


