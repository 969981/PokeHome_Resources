/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00433AB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00533ab0; name: FUN_.text__00533ab0
 */


bool FUN__text__00533ab0(long param_1,uint param_2,long param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *pdVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar8 = *(long *)(*(long *)(param_3 + 8) + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = FUN__text__0050c2a0(param_4,*(undefined8 *)(lVar8 + 0x68)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = *(undefined8 *)(param_4 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = FUN__text__0050c2a0(param_4,*(undefined8 *)(lVar7 + 0x68)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    uVar5 = *(undefined8 *)(lVar2 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(lVar7 + 0x58) != -1) { // [自动静态注释] 条件判断/分支
    FUN__text__0050c2a0(param_4,*(undefined8 *)(lVar7 + 0x80)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (param_2 < *(uint *)(param_1 + 0x80)) { // [自动静态注释] 条件判断/分支
    pdVar4 = (double *)(*(long *)(param_1 + 0x78) + (ulong)param_2 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pdVar4 = (double *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             (*(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x20) + (ulong)param_2 * 0x38 + 0x18 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_78 = *pdVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar11 = pdVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dVar12 = pdVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = *(undefined8 *)(param_3 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_88 = *(undefined8 *)(param_3 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = *(undefined8 *)(param_3 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  dStack_70 = dVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = dVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar9 = (float)FUN__text__00509290(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar6 = (long *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)((long)plVar6 + 0x24) = fVar9;
  dVar10 = (double)FUN__text__0047da2c(*(undefined8 *)(*(long *)(param_3 + 8) + 0x20)); // [自动静态注释] 调用尚未恢复正式名称的函数
  dVar10 = (dVar10 - local_78) * (dVar10 - local_78) + (dVar11 - dStack_70) * (dVar11 - dStack_70) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           (dVar12 - local_68) * (dVar12 - local_68); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((double)(fVar9 * fVar9) <= dVar10) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar6 + 0x10))(plVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined2 *)((long)plVar6 + 0x29) = 0x100;
    lVar1 = *(long *)(lVar8 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
      uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = *(undefined8 *)(lVar1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00533100(uVar5,uVar3,plVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0052b1ac(plVar6,&local_78,&local_90); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar1 = *(long *)(lVar8 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((lVar1 != -1) || (*(long *)(lVar7 + 0x58) != -1)) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)((long)plVar6 + 0x2b) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return dVar10 < (double)(fVar9 * fVar9); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


