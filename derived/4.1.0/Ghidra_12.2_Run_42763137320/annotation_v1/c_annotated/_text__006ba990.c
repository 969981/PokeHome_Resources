/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BA990
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ba990; name: FUN_.text__006ba990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ba990(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = FUN__text__006b253c(param_1,6); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = FUN__text__006b27a8(param_1,0x12); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    lVar5 = *(long *)(*(long *)(param_2 + 200) + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
      lVar5 = lVar5 + (ulong)*(uint *)(lVar4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar6 = (float)FUN__text__006bac98(param_1,lVar5,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      fVar7 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar8 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(byte *)(lVar3 + 4) & 1) != 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(lVar5 + 0x60) = *(undefined4 *)(lVar3 + 0x3c);
        if (((((float)*(undefined8 *)(param_1 + 0x80) == 0.0) && // [自动静态注释] 条件判断/分支
             ((float)*(undefined8 *)(param_1 + 0x90) == 0.0)) && (*(float *)(param_1 + 0x74) == 0.0) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            ) && ((((float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) == 0.0 && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   (*(float *)(param_1 + 0x78) == 0.0)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  ((float)*(undefined8 *)(param_1 + 0x88) == 0.0)))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          fVar8 = 1e+06; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          fVar8 = 1.0 / (0.7 / *(float *)(lVar3 + 0x3c)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(float *)(lVar5 + 100) = fVar8;
        *(uint *)(lVar5 + 0x50) = (uint)*(byte *)(lVar3 + 5);
        *(float *)(lVar5 + 0x70) = *(float *)(lVar3 + 0x40) / 255.0;
        *(float *)(lVar5 + 0x74) = *(float *)(lVar3 + 0x44) / 255.0;
        *(float *)(lVar5 + 0x78) = *(float *)(lVar3 + 0x48) / 255.0;
        fVar8 = *(float *)(lVar3 + 0x4c) / 255.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(float *)(lVar5 + 0x7c) = fVar8;
      local_68 = *(float *)(lVar3 + 100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_64 = *(float *)(lVar3 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar8 = *(float *)(lVar3 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar1 = *(byte *)(lVar3 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar2 = *(byte *)(lVar3 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(byte *)(lVar3 + 4) >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__006c1ba0(0,0x42c80000,&local_64); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(uint *)(lVar5 + 0x54) = (uint)bVar1;
        *(float *)(lVar5 + 0x80) = local_64 / fVar6 + 1e-05;
        FUN__text__006c1ba0(0,0x42c80000,&local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
        fVar8 = fVar8 * (*_DAT_008a02c8 / *_DAT_008a02d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar6 = cosf(fVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar6 = fVar6 * (local_68 / *(float *)(param_1 + 0x50)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar5 + 0x84) = fVar6 + fVar6;
        fVar6 = sinf(fVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar6 = -(fVar6 * (local_68 / *(float *)(param_1 + 0x54))); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(lVar5 + 0x88) = fVar6 + fVar6;
        fVar6 = *(float *)(lVar3 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar5 + 0xa0) = 0;
        *(float *)(lVar5 + 0x90) = fVar6 / 255.0;
        fVar6 = *(float *)(lVar3 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar5 + 0xa4) = 0;
        *(float *)(lVar5 + 0x94) = fVar6 / 255.0;
        fVar6 = *(float *)(lVar3 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar5 + 0xa8) = 0;
        *(float *)(lVar5 + 0x98) = fVar6 / 255.0;
        fVar7 = *(float *)(lVar3 + 0x5c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar5 + 0xac) = 0;
        *(undefined4 *)(lVar5 + 0x8c) = 0;
        ((undefined4 *)(lVar5 + 0xa0))[bVar2] = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar7 = fVar7 / 255.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(float *)(lVar5 + 0x9c) = fVar7;
      fVar6 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((*(byte *)(lVar3 + 4) >> 2 & 1) != 0) { // [自动静态注释] 条件判断/分支
        *(uint *)(lVar5 + 0x58) = (uint)*(byte *)(lVar3 + 8);
        *(float *)(lVar5 + 0xb0) = *(float *)(lVar3 + 0x6c) / 255.0;
        *(float *)(lVar5 + 0xb4) = *(float *)(lVar3 + 0x70) / 255.0;
        *(float *)(lVar5 + 0xb8) = *(float *)(lVar3 + 0x74) / 255.0;
        fVar6 = *(float *)(lVar3 + 0x78) / 255.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(float *)(lVar5 + 0xbc) = fVar6;
      FUN__text__006bb1c0(param_1,lVar5,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    if ((*(byte *)(lVar3 + 4) >> 4 & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006bb400(param_1,param_2,lVar3,lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


