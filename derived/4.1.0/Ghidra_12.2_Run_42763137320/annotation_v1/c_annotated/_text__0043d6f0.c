/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0033D6F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043d6f0; name: FUN_.text__0043d6f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0043d6f0(undefined4 param_1,long *param_2,long param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 extraout_s0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_94; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = _DAT_008a45f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)param_2[1] == 0) { // [自动静态注释] 条件判断/分支
    bVar3 = *(byte *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar5 = (undefined8 *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*(char *)(puVar5 + 1) != *(char *)((long)param_2 + 0x11)) { // [自动静态注释] 条件判断/分支
        plVar4 = (long *)*puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(char *)(puVar5 + 1) = *(char *)((long)param_2 + 0x11);
        puVar2 = (undefined8 *)(**(code **)*plVar4)(param_1,plVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (param_3 == 0) { // [自动静态注释] 条件判断/分支
          local_48 = *(int *)(param_4 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar6 = *(long *)(param_4 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          param_1 = extraout_s0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (lVar6 != 0) goto LAB__text__0043d7d0; // [自动静态注释] 条件判断/分支
LAB__text__0043d89c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          local_94 = *(int *)(param_4 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (local_48 == local_94) goto LAB__text__0043d864; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          local_90 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uStack_88 = puVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_44 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_80 = puVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uStack_78 = puVar2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_70 = puVar2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uStack_68 = puVar2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          FUN__text__00434be0(*puVar1,*(undefined8 *)(param_3 + 0x28),&local_90,&local_44,0); // [自动静态注释] 调用尚未恢复正式名称的函数
          local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          param_1 = local_44; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(long *)(param_3 + 8) != 0) { // [自动静态注释] 条件判断/分支
            local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(param_3 + 0x18)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            param_1 = FUN__text__0041a060(param_3 + 8,&local_90,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
            *(undefined4 *)(param_3 + 0x18) = (undefined4)local_90;
          } // [自动静态注释] 作用域/控制流边界
          lVar6 = *(long *)(param_4 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (lVar6 == 0) goto LAB__text__0043d89c; // [自动静态注释] 条件判断/分支
LAB__text__0043d7d0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          local_90 = *puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uStack_88 = puVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_44 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_80 = puVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uStack_78 = puVar2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          local_70 = puVar2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uStack_68 = puVar2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          FUN__text__00434be0(*puVar1,*(undefined8 *)(lVar6 + 0x28),&local_90,&local_44,0); // [自动静态注释] 调用尚未恢复正式名称的函数
          local_94 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          param_1 = local_44; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(long *)(lVar6 + 8) != 0) { // [自动静态注释] 条件判断/分支
            local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(lVar6 + 0x18)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            param_1 = FUN__text__0041a060((long *)(lVar6 + 8),&local_90,&local_94); // [自动静态注释] 调用尚未恢复正式名称的函数
            *(undefined4 *)(lVar6 + 0x18) = (undefined4)local_90;
          } // [自动静态注释] 作用域/控制流边界
          if (local_48 == local_94) goto LAB__text__0043d864; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        param_1 = (**(code **)(*plVar4 + 8)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                            (plVar4,*(undefined8 *)(param_4 + 8),puVar2,&local_48,&local_94); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
LAB__text__0043d864: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar3 = *(byte *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (((bVar3 & 3) == 0) && // [自动静态注释] 循环/迭代
            (puVar5 = puVar5 + 2, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar5 != (undefined8 *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x10))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((bVar3 & 3) == 1) { // [自动静态注释] 条件判断/分支
    *(byte *)(param_2 + 2) = bVar3 & 0xfe;
    FUN__text__0043d6f0(param_2,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


