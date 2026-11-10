/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B78DC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b78dc; name: FUN_.text__006b78dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b78dc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        float *param_5,undefined4 param_6,undefined4 param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((long *)*param_2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    uVar2 = (**(code **)(*(long *)*param_2 + 0x30))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = (long *)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      if (plVar3 != (long *)0x0) goto LAB__text__006b79ac; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (*(int *)((long)plVar3 + 0xd4) == 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(*plVar3 + 0x18))(plVar3,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__006a0f24(*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *param_2 = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = (long *)FUN__text__006a0f04(0xd8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(plVar3 + 2) = 0;
    lVar1 = _DAT_008a68c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar3 = lVar1 + 0x10;
    plVar3[1] = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006f5bcc(plVar3 + 8); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006f4e0c(plVar3 + 0x11); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar3[0x1a] = -0x100000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_2 = (long)plVar3;
LAB__text__006b79ac: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_88 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ebe40(&local_90); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_88 = CONCAT44(param_6,(undefined4)uStack_88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90._0_2_ = CONCAT11(2,(undefined1)local_90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = CONCAT44((int)*param_5,0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_78 = CONCAT44(uStack_78._4_4_,(int)param_5[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = CONCAT26(1,(undefined6)local_90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006c07c0(*param_2,param_3,param_4,&local_90,param_7); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


