/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004334F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005334f0; name: FUN_.text__005334f0
 */


bool FUN__text__005334f0(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,long param_4 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ,uint param_5,long param_6,long param_7,long param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *pdVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dStack_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_5 < *(uint *)(param_4 + 0x80)) { // [自动静态注释] 条件判断/分支
    pdVar4 = (double *)(*(long *)(param_4 + 0x78) + (ulong)param_5 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pdVar4 = (double *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             (*(long *)(*(long *)(*(long *)(param_4 + 8) + 8) + 0x20) + (ulong)param_5 * 0x38 + 0x18 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_88 = *pdVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar9 = pdVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = pdVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dStack_80 = dVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar6 = (double)FUN__text__00520f94(param_8,&local_88); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar5 = param_7 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar8 = (float)(dVar9 - dStack_80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (ulong)(uint)fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = *(float *)(param_7 + 0x128); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = (float)(param_3 - local_78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar11 = (ulong)(uint)fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(param_7 + 0x2c) = fVar12;
  fVar8 = (float)(dVar6 - local_88) * (float)(dVar6 - local_88) + fVar8 * fVar8 + fVar10 * fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar12 * fVar12 <= fVar8) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(param_7 + 8) + 0x10))(lVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined2 *)(param_7 + 0x31) = 0x100;
    lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = FUN__text__00521260(param_8,*(undefined8 *)(param_6 + 0x78)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar2 & 1) == 0) goto LAB__text__005336a8; // [自动静态注释] 条件判断/分支
    uVar1 = FUN__text__0052163c(param_8,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar7 = FUN__text__00521904(param_8,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_a0 = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_98 = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_90 = uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58) == *(long *)(param_8 + 0x70)) || // [自动静态注释] 条件判断/分支
       ((uVar2 = FUN__text__00521b44(local_88,dStack_80,local_78,param_8,uVar1), (uVar2 & 1) != 0 && // [自动静态注释] 调用尚未恢复正式名称的函数
        (uVar3 = FUN__text__00533100(local_88,dStack_80,local_78,uVar7,uVar3,uVar11, // [自动静态注释] 调用尚未恢复正式名称的函数
                                     *(undefined8 *)(param_6 + 0xb0),0,lVar5), (uVar3 & 1) != 0))))
    { // [自动静态注释] 作用域/控制流边界
      FUN__text__0052b1ac(lVar5,&local_88,&local_a0); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__0052b23c(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (lVar5 != -1) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_7 + 0x33) = 0;
  } // [自动静态注释] 作用域/控制流边界
LAB__text__005336a8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return fVar8 < fVar12 * fVar12; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


