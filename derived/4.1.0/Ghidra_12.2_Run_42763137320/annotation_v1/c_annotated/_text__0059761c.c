/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0049761C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059761c; name: FUN_.text__0059761c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0059761c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float __x; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_80 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(uint *)(param_1 + 0x200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(param_1 + 0x204); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x40))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = *(undefined8 *)(param_1 + 0x268); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = uVar1 + iVar3 * uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = 0x14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_98 = 0x389ba311a7b1e081; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_90 = 0x721141; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e927c(auStack_80,&local_98); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar5 = FUN__text__005a1ad0(uVar10,iVar3,auStack_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
    pfVar6 = (float *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar4 = *_DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(lVar5 + 0x138) = iVar4;
    FUN__text__005b52c0(*_DAT_0089f418,lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar5 = lVar5 + (long)iVar4 * 0x70 + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar6 = (float *)thunk_FUN__text__006ec5f4(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (local_68 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (pfVar6 != (float *)0x0) { // [自动静态注释] 条件判断/分支
    __x = (float)uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = FUN__text__005cd4dc(*(undefined8 *)(param_1 + 0xb0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    fVar11 = exp2f(__x); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar6[2] = __x; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar7 = (ulong)uVar1 * 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *pfVar6 = (float)iVar4 / fVar11;
    pfVar6[1] = (float)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar6[3] = *(float *)(param_1 + 0x270); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = *(undefined8 *)(lVar7 + 0x8b4400); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = *(undefined8 *)(lVar7 + 0x8b4408); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = *(undefined8 *)(lVar7 + 0x8b4418); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(pfVar6 + 0x10) = *(undefined8 *)(lVar7 + 0x8b4410);
    *(undefined8 *)(pfVar6 + 0x12) = uVar9;
    *(undefined8 *)(pfVar6 + 0xc) = uVar10;
    *(undefined8 *)(pfVar6 + 0xe) = uVar8;
    uVar10 = *(undefined8 *)(lVar7 + 0x8b43e0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = *(undefined8 *)(lVar7 + 0x8b43e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = *(undefined8 *)(lVar7 + 0x8b43f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(pfVar6 + 8) = *(undefined8 *)(lVar7 + 0x8b43f0);
    *(undefined8 *)(pfVar6 + 10) = uVar9;
    *(undefined8 *)(pfVar6 + 4) = uVar10;
    *(undefined8 *)(pfVar6 + 6) = uVar8;
    uVar10 = *(undefined8 *)(param_1 + 0x288); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = *(undefined8 *)(param_1 + 0x298); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = *(undefined8 *)(param_1 + 0x280); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(pfVar6 + 0x18) = *(undefined8 *)(param_1 + 0x290);
    *(undefined8 *)(pfVar6 + 0x1a) = uVar8;
    *(undefined8 *)(pfVar6 + 0x14) = uVar9;
    *(undefined8 *)(pfVar6 + 0x16) = uVar10;
    uVar10 = *(undefined8 *)(param_1 + 0x2a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = *(undefined8 *)(param_1 + 0x2b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = *(undefined8 *)(param_1 + 0x2a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(pfVar6 + 0x20) = *(undefined8 *)(param_1 + 0x2b0);
    *(undefined8 *)(pfVar6 + 0x22) = uVar8;
    *(undefined8 *)(pfVar6 + 0x1c) = uVar9;
    *(undefined8 *)(pfVar6 + 0x1e) = uVar10;
  } // [自动静态注释] 作用域/控制流边界
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    thunk_FUN__text__006ec608(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar10 = *(undefined8 *)(param_1 + 0x268); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = 0x14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_98 = 0x389ba311a7b1e081; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_90 = 0x721141; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e927c(auStack_80,&local_98); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar5 = FUN__text__005a1ad0(uVar10,iVar3,auStack_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_68 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar10 = *(undefined8 *)(param_1 + 0x260); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_88 = 0x14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_98 = 0x389ba311a7b1e081; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_90 = 0x721141; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e927c(auStack_80,&local_98); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar7 = FUN__text__005bc998(uVar10,0,auStack_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_68 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((lVar5 != 0) && (lVar7 != 0)) { // [自动静态注释] 条件判断/分支
    FUN__text__005a0f78(lVar7,*(undefined8 *)(param_1 + 0x60),lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005a2ae0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


