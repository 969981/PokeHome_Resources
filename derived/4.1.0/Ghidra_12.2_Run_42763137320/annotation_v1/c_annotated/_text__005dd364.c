/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004DD364
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dd364; name: FUN_.text__005dd364
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005dd364(long param_1,uint param_2,undefined8 param_3,undefined8 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char acStack_60 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 8) = param_3;
  *(uint *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x20) = 0x70f683;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = *param_4;
  uVar2 = param_5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x40) = *param_5;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  if (param_2 != 0xffffffff) { // [自动静态注释] 条件判断/分支
    snprintf(acStack_60,0x10,(char *)0x71349f,(ulong)param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00109fd4(&local_18,acStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005e9290(&local_50,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x18) = local_50;
    *(undefined8 *)(param_1 + 0x20) = uStack_48;
    *(undefined8 *)(param_1 + 0x28) = local_40;
    if (*(long *)(param_1 + 0x30) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = local_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    if (local_18 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((*_DAT_0089f968 & 1) == 0) { // [自动静态注释] 条件判断/分支
    iVar7 = __cxa_guard_acquire(_DAT_0089f968); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6 = _DAT_0089f970; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = _DAT_0089f758; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar7 != 0) { // [自动静态注释] 条件判断/分支
      local_68 = 0xcbf29ce484222645; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (((*_DAT_0089f750 & 1) == 0) && (iVar7 = __cxa_guard_acquire(_DAT_0089f750), iVar7 != 0)) { // [自动静态注释] 条件判断/分支
        plVar4[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar8 = _DAT_0089f690; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(plVar4 + 8) = 0;
        uVar1 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar1 = uVar1 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(plVar4 + 6) = 0;
        *plVar4 = lVar8 + 0x10;
        lVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
          if (*(long *)(uVar1 + 0x98) == 0) { // [自动静态注释] 条件判断/分支
            lVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            lVar8 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        *(undefined4 *)(plVar4 + 10) = 0;
        lVar5 = _DAT_0089f760; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *plVar4 = lVar5 + 0x10;
        plVar4[1] = lVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[9] = lVar5 + 0x48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pbVar9 = (byte *)*_DAT_0089f768; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[0xb] = -0x340d631b7bddd9bb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[0xc] = (long)pbVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar3 = *pbVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (bVar3 != 0) { // [自动静态注释] 条件判断/分支
          do { // [自动静态注释] 循环/迭代
            pbVar9 = pbVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            local_68 = (local_68 ^ bVar3) * 0x100000001b3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            bVar3 = *pbVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (bVar3 != 0); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
        plVar4[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[2] = (long)plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4[0xb] = local_68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        __cxa_guard_release(_DAT_0089f750); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *puVar6 = plVar4;
      (**(code **)(plVar4[9] + 0x10))(plVar4 + 9); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__001001d0(_DAT_0089f960,puVar6,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
      __cxa_guard_release(_DAT_0089f968); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e9290(&local_50,_DAT_0089f970); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x18) = local_50;
  *(undefined8 *)(param_1 + 0x20) = uStack_48;
  *(undefined8 *)(param_1 + 0x28) = local_40;
  if (*(long *)(param_1 + 0x30) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x30) = local_38;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


