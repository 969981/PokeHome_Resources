/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001494B8
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002494b8; name: FUN_.text__002494b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002494b8(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_3 == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = uVar7 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar7 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__00249704: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar5 = *(long **)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = *(undefined8 *)(param_2 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8) = plVar5;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  plVar3 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,&LAB__text__003f0c70,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar5 + 0xb8))(plVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__001281fc(plVar3,param_2,param_4,uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = _DAT_008a1bb0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(plVar3 + 0xca) = 3;
  plVar3[200] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[0xc9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = plVar3 + 9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar4 = lVar2 + 0xa8;
  *plVar3 = lVar2 + 0x10;
  plVar3[10] = lVar2 + 0xe8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(plVar3 + 0xcb,0,0x3d0a3a); // [自动静态注释] 内存复制、清零或移动
  memset((void *)((long)plVar3 + 0x3d1094),0,50000); // [自动静态注释] 内存复制、清零或移动
  memset(plVar3 + 0x7ba7d,0,80000); // [自动静态注释] 内存复制、清零或移动
  plVar3[1] = (long)plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[2] = (long)plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = plVar3;
  plVar3[3] = (long)&LAB__text__003f0c70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3[4] = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  (**(code **)(*plVar4 + 0x10))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_68 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_68 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00128598(plVar3,&local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_68 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  local_70 = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(plVar3[9] + 0x10))(plVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar1 = *(undefined8 **)(param_2 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar1 < *(undefined8 **)(param_2 + 0x88)) { // [自动静态注释] 条件判断/分支
    if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__00249704; // [自动静态注释] 条件判断/分支
    *(undefined8 *)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8) = *(undefined8 *)(param_2 + 0x90);
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    *puVar1 = local_70;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    *(undefined8 **)(param_2 + 0x80) = puVar1 + 1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00130fb0(param_2 + 0x78,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_70 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(local_70[9] + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_2 + 0xc0) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


