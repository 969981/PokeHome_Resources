/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001C1610
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c1610; name: FUN_.text__002c1610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c1610(float param_1,float param_2,long param_3,uint *param_4,uint param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        ulong param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_74; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)((long)param_4 + 0xd) != '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar7 = param_3 + 100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4 = (uint *)FUN__text__002c11d0(lVar7,param_4,param_5 & 1,&local_74); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar4 == (uint *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((param_5 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar3 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar8 = *(long *)(*_DAT_0089f4f8 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar8 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__002a5f64(&local_48,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar5 = FUN__text__002c53f0(local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__002c5c20(uVar5,uVar3,(short)uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_48 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if ((uVar3 - 0x5c9 < 0xfffffa38) || // [自动静态注释] 条件判断/分支
       ((*(byte *)(lVar7 + (ulong)uVar3 * 0x18 + 0x151ad) & 0x33) == 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar4[2] = (uint)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar6 = (float *)(puVar4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else if ((*(byte *)(lVar7 + (ulong)uVar3 * 0x18 + 0x151a8) & 1) == 0) { // [自动静态注释] 条件判断/分支
      fVar9 = (float)puVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar4 = *puVar4 | 1;
      pfVar6 = (float *)(puVar4 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_1 < fVar9) { // [自动静态注释] 条件判断/分支
        puVar4[3] = (uint)fVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pfVar6 = (float *)(puVar4 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *pfVar6 = param_1;
      fVar9 = (float)puVar4[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar6 = (float *)(puVar4 + 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_2 < fVar9) { // [自动静态注释] 条件判断/分支
        puVar4[5] = (uint)fVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pfVar6 = (float *)(puVar4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      pfVar6 = (float *)(puVar4 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((param_1 < *pfVar6) || (pfVar6 = (float *)(puVar4 + 3), *pfVar6 < param_1)) { // [自动静态注释] 条件判断/分支
        *pfVar6 = param_1;
      } // [自动静态注释] 作用域/控制流边界
      pfVar6 = (float *)(puVar4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*pfVar6 <= param_2) && (pfVar6 = (float *)(puVar4 + 5), param_2 <= *pfVar6)) // [自动静态注释] 条件判断/分支
      goto LAB__text__002c1788; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *pfVar6 = param_2;
  } // [自动静态注释] 作用域/控制流边界
LAB__text__002c1788: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bVar1 = (byte)(1 << (ulong)(local_74 & 0x1f)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)((long)puVar4 + 5) = *(byte *)((long)puVar4 + 5) | bVar1;
  if ((param_6 & 1) != 0) { // [自动静态注释] 条件判断/分支
    *(byte *)((long)puVar4 + 6) = *(byte *)((long)puVar4 + 6) | bVar1;
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((((int)uVar3 < 0x3d5) && (lVar7 = lVar7 + (ulong)uVar3 * 0x58, *(short *)(lVar7 + 0x7a) != 0)) // [自动静态注释] 条件判断/分支
     && ((*(uint *)(lVar7 + 0x70) >> 1 & 1) == 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__002c12f0(param_3,(ulong)uVar3,(short)param_4[1],param_4[2] == 1,(char)param_4[3], // [自动静态注释] 调用尚未恢复正式名称的函数
                        param_5 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


