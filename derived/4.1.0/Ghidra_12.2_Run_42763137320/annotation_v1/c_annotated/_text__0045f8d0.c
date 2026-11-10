/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035F8D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045f8d0; name: FUN_.text__0045f8d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0045f8d0(float param_1,long param_2,int param_3,int param_4,undefined4 param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_52; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar4 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_6 == 0) { // [自动静态注释] 条件判断/分支
    puVar4 = (undefined8 *)(param_2 + 0x148); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar1 = (undefined8 *)(param_2 + 0x170); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_6 != 5) { // [自动静态注释] 条件判断/分支
    puVar1 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = (ulong)param_6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    puVar4 = (undefined8 *)*puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar4 = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__0045f960; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } while (*(int *)(puVar4 + 1) != param_3); // [自动静态注释] 循环/迭代
  puVar4 = puVar4 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00466c24(param_2,*(undefined4 *)(_DAT_008a4ac8 + uVar6 * 4)); // [自动静态注释] 调用尚未恢复正式名称的函数
  goto joined_r0x0045fa10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  while (*(int *)(puVar4 + 1) != param_3) { // [自动静态注释] 循环/迭代
LAB__text__0045f960: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar4 = (undefined8 *)*puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar4 = (undefined8 *)puVar1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        puVar4 = (undefined8 *)FUN__text__00400f80(0,0x30); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        puVar4[2] = 0x88da68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar4 = puVar1[2];
        puVar1[2] = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5 = (undefined8 *)puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar5 != (undefined8 *)0x0) goto LAB__text__0045f988; // [自动静态注释] 条件判断/分支
LAB__text__0045f9c4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *puVar1 = puVar4;
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar5 = (undefined8 *)puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar5 == (undefined8 *)0x0) goto LAB__text__0045f9c4; // [自动静态注释] 条件判断/分支
LAB__text__0045f988: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *puVar5 = puVar4;
        puVar4 = (undefined8 *)puVar1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      puVar1[1] = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[2] = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar4 = 0;
      *(int *)((long)puVar1 + 0x24) = *(int *)((long)puVar1 + 0x24) + 1;
      puVar4 = (undefined8 *)puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(puVar4 + 1) = param_3;
      break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  puVar4 = puVar4 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004cfe04(puVar4,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00466c24(param_2,*(undefined4 *)(_DAT_008a4ac8 + uVar6 * 4)); // [自动静态注释] 调用尚未恢复正式名称的函数
joined_r0x0045fa10: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (((uVar2 & 1) != 0) && (*(undefined1 *)((long)puVar4 + 0x1c) = 0, DAT_00ae9a60 != 0)) { // [自动静态注释] 条件判断/分支
    if (puVar4[2] != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0042f65c(param_1,DAT_00ae9a60,puVar4[2],uVar6,param_4,param_5,2); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((param_4 == 0) || (local_68 = *(float *)(puVar4 + 3), local_68 == param_1)) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x0045fb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(param_1,puVar4,uVar6,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    local_58 = 0x11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_54 = 0x101; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_52 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_78 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_70 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fStack_64 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_5c = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = FUN__text__0042f18c(DAT_00ae9a60,&local_78,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar4[2] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)*puVar4)(param_1,puVar4,uVar6,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


